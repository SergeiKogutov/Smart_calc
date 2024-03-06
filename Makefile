TARGET = SmartCalc
CFLAGS = -Wall -Wextra -Werror -std=c11 
GCC = gcc
TEST_SRC = s21_smart_calc_test.c

ifeq ($(UNAME_S),Linux)
	TEST_CHECK_F= -lcheck
	OPEN_CMD = xdg-open
	ADD_LIB = -lm -lrt -lpthread
endif

ifeq ($(UNAME_S),Darwin)
	TEST_CHECK_F= $(shell pkg-config --cflags --libs check)
	OPEN_CMD = open
	ADD_LIB =
endif

all: install


test: s21_smart_calc.a
	$(GCC) $(CFLAGS) s21_smart_calc.a s21_smart_calc_test.c -o s21_smart_calc_test $(shell pkg-config --cflags --libs check)
	./s21_smart_calc_test

s21_smart_calc.a:
	$(GCC) $(CFLAGS) -c *.c
	ar rcs s21_smart_calc.a *.o
	make clean

gcov_report: $(TEST_SRC) *.c
	$(GCC) $(CFLAGS) $^ -fprofile-arcs -ftest-coverage -g -o s21_smart_calc_test_gcov_report -lcheck $(TEST_CHECK_F) $(ADD_LIB)
	./s21_smart_calc_test_gcov_report
	lcov -t "report_gcov" -o report_gcov.info -c -d ./
	genhtml -o report report_gcov.info
	rm *.gcda
	rm *.gcno

install:
	@echo "Start installation"
	@mkdir -p ../build
	@cd smart_calc_v01 && qmake && make && make clean && rm -rf Makefile && mv smart_calc_v01.app ../../build/$(TARGET).app
	@cp -R ../build/$(TARGET).app ~/Desktop/$(TARGET).app

uninstall:
	@rm -rf ~/Desktop/SmartCalc.app ../build
	@echo "Uninstall completed successfully"   

dvi:
	open README.html

dist: install
	mkdir s21_smart_calc
	tar -czf s21_smart_calc.tar.gz --directory=s21_smart_calc/ . 

clang:
	clang-format -n *.c *.h smart_calc_v01/*.c smart_calc_v01/*.cpp smart_calc_v01/*.h --verbose
	clang-format -i *.c *.h smart_calc_v01/*.c smart_calc_v01/*.cpp smart_calc_v01/*.h --verbose

clean:
	rm -rf *.o
	rm -rf smart_calc_v01/*.o
	rm -rf *.gcda
	rm -rf *.gcno
