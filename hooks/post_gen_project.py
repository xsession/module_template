#!/usr/bin/env python
import os
import shutil

PROJECT_DIRECTORY = os.path.realpath(os.path.curdir)

def remove_file(filepath):
    os.remove(os.path.join(PROJECT_DIRECTORY, filepath))

if __name__ == '__main__':

    if '{{ cookiecutter.mock_enable }}' == 'false':
        shutil.rmtree(os.path.join(PROJECT_DIRECTORY, 'mock'))
