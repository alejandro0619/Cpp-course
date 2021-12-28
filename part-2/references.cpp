// read ./docs/references.md

void addOne(int i) {
  i++; // has no real effect because this is a copy of the original.
}

void addOneVersion2(int &i) {
  i++; // This actually changes the original variable
}

