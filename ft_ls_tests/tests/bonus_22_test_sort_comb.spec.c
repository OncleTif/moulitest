#include <project.h>

static	char *cmd;
static void unitTest_00(t_test *test) 
{
	reset_sandbox();
	cmd = "-lUc  ..";
	mt_assert(strcmp(ls(cmd), ft_ls(cmd)) == 0);
}

static void unitTest_01(t_test *test) 
{
	cmd = "-lcu  ..";
	mt_assert(strcmp(ls(cmd), ft_ls(cmd)) == 0);
}

static void unitTest_02(t_test *test) 
{
	cmd = "-luc  ..";
	mt_assert(strcmp(ls(cmd), ft_ls(cmd)) == 0);
}


static void unitTest_03(t_test *test) 
{
	cmd = "-lcU  ..";
	mt_assert(strcmp(ls(cmd), ft_ls(cmd)) == 0);
}


static void unitTest_04(t_test *test) 
{
	cmd = "-1tUc ..";
	mt_assert(strcmp(ls(cmd), ft_ls(cmd)) == 0);
}

static void unitTest_05(t_test *test) 
{
	cmd = "-1tcu ..";
	mt_assert(strcmp(ls(cmd), ft_ls(cmd)) == 0);
}

static void unitTest_06(t_test *test) 
{
	cmd = "-1tuc ..";
	mt_assert(strcmp(ls(cmd), ft_ls(cmd)) == 0);
}

static void unitTest_07(t_test *test) 
{
	cmd = "-1tcU ..";
	mt_assert(strcmp(ls(cmd), ft_ls(cmd)) == 0);
}

static void unitTest_08(t_test *test) 
{
	cmd = "-tlUc ..";
	mt_assert(strcmp(ls(cmd), ft_ls(cmd)) == 0);
}

static void unitTest_09(t_test *test) 
{
	cmd = "-tlcu ..";
	mt_assert(strcmp(ls(cmd), ft_ls(cmd)) == 0);
}

static void unitTest_10(t_test *test) 
{
	cmd = "-tluc ..";
	mt_assert(strcmp(ls(cmd), ft_ls(cmd)) == 0);
}

static void unitTest_11(t_test *test) 
{
	cmd = "-tlcU ..";
	mt_assert(strcmp(ls(cmd), ft_ls(cmd)) == 0);
}

void	suite_bonus_22_test_sort_comb(t_suite *suite)
{
	SUITE_ADD_TEST(suite, unitTest_00);
	SUITE_ADD_TEST(suite, unitTest_01);
	SUITE_ADD_TEST(suite, unitTest_02);
	SUITE_ADD_TEST(suite, unitTest_03);
	SUITE_ADD_TEST(suite, unitTest_04);
	SUITE_ADD_TEST(suite, unitTest_05);
	SUITE_ADD_TEST(suite, unitTest_06);
	SUITE_ADD_TEST(suite, unitTest_07);
	SUITE_ADD_TEST(suite, unitTest_08);
	SUITE_ADD_TEST(suite, unitTest_09);
	SUITE_ADD_TEST(suite, unitTest_10);
	SUITE_ADD_TEST(suite, unitTest_11);
}
