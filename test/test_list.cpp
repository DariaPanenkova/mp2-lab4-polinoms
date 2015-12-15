#include <gtest.h>
#include "list.h"

TEST(LIST,can_not_get_elem_empty_list)
{
	List<int> l;

	ASSERT_ANY_THROW(l.AddSortElem(4));
}

TEST(LIST,can_not_get_elem_negative_pos)
{
	List<int> l;

	ASSERT_ANY_THROW(l.AddSortElem(-1));
}

TEST(LIST, can_add_elem)
{
	List<int> l;
	l.AddSortElem(3);
	EXPECT_EQ(3,l.GetElm(0)->GetData());
}