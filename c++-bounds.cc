
// Read array at index + offset (returns 0 if out of bounds).
int index(int* array, int length, int index, unsigned short offset) {
  if (index < 0) return 0;
  index += offset;
  if (index < 0) return 0;
  if (index >= length) return 0; 
  return array[index];
}
