PROJ_NAME = Functional_Calculator
TEST_PROJ_NAME = Test_$(PROJ_NAME)
BUILD_DIR = Build

#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# All source code files
SRC = src/add_num.c\
src/cal_time.c\
src/cal_speed.c\
src/cal_distance.c\
src/sub_num.c\
src/mul_num.c\
src/div_num.c\
src/rem_num.c\
src/fact_num.c\
src/square_num.c\
src/sq_rt.c\
src/evenodd_num.c\
src/armstrong_check.c\
src/prime_check.c\
src/palindome_check.c\
src/permuation_find.c\
src/combination_find.c\
src/average_find.c\
src/simple_interest.c\
src/compound_interest.c

# All test source files
TEST_SRC = test/main.c\
unity/unity.c

# All include folders with header files
INC = -Iinc\
-Iunity

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all run test coverage cppcheck valgrind clean
all:$(BUILD_DIR)
	gcc $(SRC) $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC)) $(IN)
run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))
test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) $(IN)
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) 
	
coverage: ${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(TEST_SRC) $(INC) -o -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC)) $(IN)
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(SRC)
	
cppcheck: $(SRC)
	cppcheck --enable=all $(TEST_SRC) $(SRC)
valgrind:
	valgrind $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	rmdir $(BUILD_DIR)
