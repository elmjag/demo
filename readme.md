# Example Python Extension Module

This is a simple example of an python package that includes an C extension module.
This package provides `demo` module, written in C.
The `demo` module contains `foo()` function, which prints a message to stdout.
The `demo.foo()` function an be imported and called from python code.
Once this package is installed, the code below:

    import demo
    demo.foo()

Will run code in demo.c file, and print following on stdout

    Hello from demo.foo() fuction.

## Installing this package

In the root of this repository, run:

    python setup.py install

Or install using `pip`:

    pip install .

Great success!