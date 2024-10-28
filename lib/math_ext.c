#include "ruby.h"

VALUE method_add(VALUE self, VALUE a, VALUE b) {
    int result = NUM2INT(a) + NUM2INT(b);
    return INT2NUM(result);
}

void Init_math_ext() {
    VALUE MyModule = rb_define_module("MathExt");
    rb_define_method(MyModule, "add", method_add, 2);
}
