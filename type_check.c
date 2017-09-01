#include "type_check.h"

int check_num(int num){
    int factor = 1000, list[3];

    for(int i = 0; i < 3; ++i){
        factor /= 10;
        list[i] = num / factor;
        num %= factor;
    }
    return check_type(list);
}

int check_type(int nums[3]) {
    if(nums[0] % 2 == 0 && nums[1] % 2 == 0 && nums[2] % 2 == 0)
        return 0;
    else if(nums[0] % 2 != 0 && nums[1] % 2 != 0 && nums[2] % 2 != 0)
        return 1;
    else if(nums[0] != nums[1] && nums[1] != nums[2] && nums[0] != nums[2])
        return 2;
    else if(nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2])
        return 3;
}
