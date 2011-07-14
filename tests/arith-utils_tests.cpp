/*
    Copyright (C) 2011 Hugo Arregui, FuDePAN

    This file is part of the MiLi Minimalistic Library.

    MiLi is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    MiLi is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with MiLi.  If not, see <http://www.gnu.org/licenses/>.

    This is a test file.
*/

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "mili/mili.h"

using namespace mili;

TEST(ArithUtilsTest, bchain)
{
    ASSERT_TRUE(bchain(1) < 2 < 3);

    int x(10);
    ASSERT_EQ(x, (5 >= bchain(4) < 10));
}

TEST(ArithUtilsTest, power)
{
    ASSERT_EQ(4, power<2>(2));
}

TEST(ArithUtilsTest, power_negative_base)
{
    ASSERT_EQ(.25, power <-2> (2));
}

TEST(ArithUtilsTest, cubic_root)
{
    ASSERT_EQ(3, cubic_root(27));
}

TEST(ArithUtilsTest, in_range)
{
    ASSERT_FALSE(in_range(3.141692f, 10.0f, 11.0f));
}

TEST(ArithUtilsTest, implies)
{
    ASSERT_TRUE(implies(true, true));
    ASSERT_FALSE(implies(true, false));
    ASSERT_TRUE(implies(false, true));
    ASSERT_TRUE(implies(false, false));
}