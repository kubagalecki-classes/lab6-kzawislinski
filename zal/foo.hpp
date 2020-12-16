#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <numeric>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    std::for_each(people.begin(), people.end(), [](Human& k) { k.birthday(); });
    std::transform(people.begin(), people.end(), ret_v.begin(), [](Human& kt) {
        if (kt.isMonster() == true) {
            return 'n';
        }
        else {
            return 'y';
        }
    });
    return ret_v;
}
