//
// Created by darki on 9/1/2017.
//

#ifndef TYPE_CHECK_H
#define TYPE_CHECK_H


/** check_num
 * Takes a 3 digit number, splits the 3 numbers into an int[],
 * and calls check_type to check what kind of combination the
 * number is. Finally, it returns the type of number it is
 * based on the classifications predetermined.
 * @param num
 * @return type
 */
int check_num(int num);

/** check_type
 * Receives an int[3], and checks the characterization of the 3 numbers.
 * If all numbers are even, 0 is returned. If all numbers are odd, 1 is
 * returned. If all 3 numbers are different, 2 is returned. If any 2
 * numbers are identical, 3 is returned.
 * @param nums
 * @return type
 */
int check_type(int list[3]);

#endif //NUMBER_CLASSIFICATION_TYPE_CHECK_H
