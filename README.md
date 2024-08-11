# Example Project

## Quickstart: Package Installation

1. Install Python:

   ```bash
   sudo apt install -y python3 python3-pip python3-venv
   ```

1. Make a virtual environment (optional):

   ```bash
   python3 -m venv .venv
   source .venv/bin/activate
   ```

1. Update pip:

   ```bash
   pip install --upgrade pip
   ```

1. Install exampleproject:

   ```bash
   pip install .
   ```

## C++ Development

1. Install C++ build tools:

   ```bash
   pip install  --upgrade meson ninja
   ```

1. Configure the meson project (Debug mode):

   Debug:

   ```bash
   meson setup -Ddebug=true -Doptimization=g build/
   ```

   Release:

   ```bash
   meson setup -Ddebug=false -Doptimization=3 -Db_lto=true -Db_ndebug=true build/
   ```

1. Compile:

   ```bash
   meson compile -C build/
   ```

1. Run tests:

   ```bash
   meson test
   meson test --benchmark
   ```

## Python Development

1. Install editable-mode dependencies:

   ```bash
   pip install --upgrade meson-python meson ninja
   ```

1. Install the package in editable mode with tests enabled:

   ```bash
   pip uninstall -y exampleproject
   pip install --no-build-isolation --editable .[test]
   ```

1. Run tests:

   ```bash
   pytest python/tests
   ```
