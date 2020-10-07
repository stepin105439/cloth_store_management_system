#include "unity.h"
#include "unity_internals.h"
#include "cloth_store.h"
#include<string.h>
#define TEST_ASSERT_EQUAL

 void setUp(void)
        {     }
        void tearDown(void)
        {     }



        void test_add_item()
        {


                TEST_ASSERT_EQUAL ("coat",add_item("coat"));

        }
        void test_delete_product()
        {

                TEST_ASSERT_EQUAL ("jeans",delete_product("jeans"));

        }

        void test_search_item()
        {

                TEST_ASSERT_EQUAL ("coat",search_item("coat"));

        }
        void test_read_item()
        {

                TEST_ASSERT_EQUAL ("coat",read_item("coat"));

        }



        void test_edit_item()
        {
                TEST_ASSERT_EQUAL(10,edit_item(10));
        }

        void test_total_bill()
        {
                TEST_ASSERT_EQUAL( 10,total_bill(10));
        }

        int test_main(void)
        {
                UNITY_BEGIN();

                RUN_TEST(test_add_item);
                RUN_TEST(test_delete_product);
                RUN_TEST(test_search_item);
                RUN_TEST(test_read_item);
                RUN_TEST(test_edit_item);
                RUN_TEST(test_total_bill);










                return UNITY_END();



        }
