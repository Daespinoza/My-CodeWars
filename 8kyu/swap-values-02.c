//  mutate values in place
// by swapping its elements

void swap_values(int values[2]) {
  int theFirst = values[0];
  values[0] = values[1];
  values[1] = theFirst;
}