#include "mylib.h"
#include "unity.h"

void setUp(){	}
void tearDown(){	}

void test_sum(void){

TEST_ASSERT_EQUAL(30, add_num(10, 20));
}
void test_minus(void){

TEST_ASSERT_EQUAL(-10, sub_num(10, 20));
}
void test_multiply(void){

TEST_ASSERT_EQUAL(200, mul_num(10, 20));
}
void test_divide(void){

TEST_ASSERT_EQUAL(2, div_num(20,10 ));
}
void test_remind(void){

TEST_ASSERT_EQUAL(0, rem_num(20,10 ));
}
void test_factorial(void){

TEST_ASSERT_EQUAL(120, fact_num(5));
}
void test_square(void){

TEST_ASSERT_EQUAL(100, square_num(10 ));
}
void test_sqare_rt(void){

TEST_ASSERT_EQUAL(10, sq_rt(100 ));
}
void test_evnodd(void){

TEST_ASSERT_EQUAL(0, evenodd_num(7 ));
TEST_ASSERT_EQUAL(1, evenodd_num(6));

}
void test_armstrng(void){

TEST_ASSERT_EQUAL(1, armstrong_check(153 ));
}
void test_prime(void){

TEST_ASSERT_EQUAL(1, prime_check(13 ));
}
void test_palindome(void){

TEST_ASSERT_EQUAL(1, palindome_check(121 ));
}
void test_permutation(void){

TEST_ASSERT_EQUAL(60, permuation_find(5,3));
}
void test_combination(void){

TEST_ASSERT_EQUAL(10, combination_find(5,3 ));
}
void test_average(void){

TEST_ASSERT_EQUAL(15, average_find(10,20 ));
}
void test_simpleintr(void){

TEST_ASSERT_EQUAL(20, simple_interest(100,2,10 ));
}
void test_compoundintr(void){

TEST_ASSERT_EQUAL(6488, compound_interest(10000,10.25,5));
}
void test_time(void){

TEST_ASSERT_EQUAL(2, cal_time(10,5));
}
void test_speed(void){

TEST_ASSERT_EQUAL(4, cal_speed(20,5));
}
void test_distance(void){

TEST_ASSERT_EQUAL(20, cal_distance(5,4));
}



void main()
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_time);
	  	RUN_TEST(test_speed);
	  	RUN_TEST(test_distance);
	  	RUN_TEST(test_sum);
	  	RUN_TEST(test_minus);
	  	RUN_TEST(test_multiply);
	  	RUN_TEST(test_divide);
	  	RUN_TEST(test_remind);
        RUN_TEST(test_factorial);
        RUN_TEST(test_square);
        RUN_TEST(test_sqare_rt);
        RUN_TEST(test_evnodd);
        RUN_TEST(test_armstrng);
        RUN_TEST(test_prime);
        RUN_TEST(test_palindome);
        RUN_TEST(test_permutation);
        RUN_TEST(test_combination);
        RUN_TEST(test_average);
        RUN_TEST(test_simpleintr);
        RUN_TEST(test_compoundintr);




  		return UNITY_END();
	}
