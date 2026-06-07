#include "uVector_container.h"

uVector_container::uVector_container(int s) : elem{new double[s]}, sz{s} {}
uVector_container::~uVector_container() { delete[] elem; }

double& uVector_container::operator[](int i) { return elem[i]; }
int uVector_container::size() const { return sz; }
