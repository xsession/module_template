#ifndef {{cookiecutter.package_name|upper}}_{{cookiecutter.module_name|upper}}_H_
#define {{cookiecutter.package_name|upper}}_{{cookiecutter.module_name|upper}}_H_

typedef struct {{cookiecutter.module_name}}_cfg_st
{
    int32_t dummy_s32;
}{{cookiecutter.module_name}}_cfg_tst;

typedef struct {{cookiecutter.module_name}}_st
{
    {{cookiecutter.module_name}}_cfg_tst cfg_st;
    
    void (*{{cookiecutter.module_name}}_callback)(struct {{cookiecutter.module_name}}_st *self);
}{{cookiecutter.module_name}}_tst;

int32_t {{cookiecutter.module_name}}_init({{cookiecutter.module_name}}_tst *self);

#endif // {{cookiecutter.package_name|upper}}_{{cookiecutter.module_name|upper}}_H_
