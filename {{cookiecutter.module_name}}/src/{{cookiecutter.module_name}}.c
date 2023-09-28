#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <assert.h>
#include "{{cookiecutter.module_name}}.h"

static void {{cookiecutter.module_name}}_callback(struct {{cookiecutter.module_name}}_st *self)
{
    assert(self != NULL);
 
}

int32_t {{cookiecutter.module_name}}_init({{cookiecutter.module_name}}_tst *self)
{
    assert(self != NULL);

    self->{{cookiecutter.module_name}}_callback = {{cookiecutter.module_name}}_callback;

    return 0;
}
