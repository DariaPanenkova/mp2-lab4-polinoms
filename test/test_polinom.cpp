#include <gtest.h>
#include "polinom.h"
#include "monom.h"
// тесты мономов и полиномов
TEST(MONOM, can_compare_monoms_with_dif_deg)
{
	Monom m1(2,110);
	Monom m2(4,111);

	EXPECT_FALSE(m1==m2);
	EXPECT_TRUE(m1!=m2);
}

TEST(MONOM, can_compare_monoms_with_dif_coef)
{
	Monom m1(2,110);
	Monom m2(4,110);

	EXPECT_FALSE(m1==m2);
	EXPECT_TRUE(m1!=m2);
}

TEST(MONOM, can_compare_equal_monoms)
{
	Monom m1(2,110);
	Monom m2(2,110);

	EXPECT_TRUE(m1==m2);
}
TEST(MONOM, can_add_monoms)
{
	Monom m1(2,110);
	Monom m2(4,110);

	Monom exp(6,110);

	EXPECT_EQ(exp, m1+m2);
}
TEST(MONOM, can_not_add_monoms_with_diff_deg)
{
	Monom m1(2,110);
	Monom m2(4,111);

	ASSERT_ANY_THROW(m1+m2);
}
TEST(MONOM, compare_large_deg)
{
	Monom m1(2,1);
	Monom m2(2,5);

	EXPECT_TRUE(m2>m1);
	EXPECT_FALSE(m2<m1);
}
TEST(MONOM, compare_large_coef)
{
	Monom m1(8,3);
	Monom m2(10,3);

	EXPECT_TRUE(m2>m1);
	EXPECT_FALSE(m2<m1);
}
TEST(MONOM, can_sub_monoms)
{
	Monom m1(2,110);
	Monom m2(4,110);

	Monom exp(-2,110);

	EXPECT_EQ(exp, m1-m2);
}
TEST(MONOM, can_not_sub_monoms_with_diff_deg)
{
	Monom m1(2,110);
	Monom m2(4,111);

	ASSERT_ANY_THROW(m1-m2);
}

TEST(MONOM, can_multiply_monoms)
{
	Monom m1(10,1);
	Monom m2(4,3);

	EXPECT_EQ(3,(m1*m2).GetDeg());
	EXPECT_EQ(40,(m1*m2).GetCoef());

}

TEST(POLINOM, can_creat_polinom)
{
	ASSERT_NO_THROW(Polinom p);
}

TEST(POLINOM, can_add_polinoms)
{
	Polinom p1;

	p1.AddMonom(Monom(1,1));
	p1.AddMonom(Monom(3,4));

	Polinom p2;

	p2.AddMonom(Monom(4,1));
	p2.AddMonom(Monom(2,3));

	Polinom r;

	r=p1+p2;

	EXPECT_EQ(3,r[0].GetCoef());
	EXPECT_EQ(2,r[1].GetCoef());
	EXPECT_EQ(5,r[2].GetCoef());

}

TEST(POLINOM, can_sub_polinoms)
{
	Polinom p1;

	p1.AddMonom(Monom(1,1));
	p1.AddMonom(Monom(3,4));

	Polinom p2;

	p2.AddMonom(Monom(4,1));
	p2.AddMonom(Monom(2,3));

	Polinom r;

	r=p1-p2;

	EXPECT_EQ(3,r[0].GetCoef());
	EXPECT_EQ(2,r[1].GetCoef());
	EXPECT_EQ(-3,r[2].GetCoef());

}