import exampleproject._core as core


# content of test_sample.py
def inc(x):
    return x + 1


def test_add():
    assert core.add(1, 2) == 3
