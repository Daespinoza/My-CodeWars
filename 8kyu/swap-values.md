# Swamp Values
## Instruccion:

I would like to be able to pass an array with two elements to my swapValues function to swap the values. However it appears that the values aren't changing.

Can you figure out what's wrong here?

## In C++:

Sample Tests:
```cpp
#include <utility>

Describe(Sample_cases) {
  It(Small_numbers) {
    Assert::That(swap_values(std::pair<int, int>{1, 2}), Equals(std::pair<int, int>{2, 1}));
  }
  It(Bigger_numbers) {
    Assert::That(swap_values(std::pair<int, int>{14958573, 222032399}), Equals(std::pair<int, int>{222032399, 14958573}));
  }
};
```

## In C:

```c
#include <criterion/criterion.h>

static void tester(int values[2]);
void swap_values(int values[2]);

Test(swap_values, Sample_Test) {
    {
        int values[2] = {1, 2};
    /*    should become {2, 1}    */
        tester(values);
    }
}

static void tester(int values[2]) {
    const int first = values[0];
    const int second = values[1];
    swap_values(values);
    cr_assert(
        values[0] == second &&
        values[1] == first,
        "< Incorrect Result >\n \ngiven values: {%d, %d}\n \nswap outcome: {%d, %d}\nwas expected: {%d, %d}",
                                              first, second,         values[0], values[1],      second, first
    );
}
```
