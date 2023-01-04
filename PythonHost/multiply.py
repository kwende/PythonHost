import numpy as np

# for virtual environment. https://stackoverflow.com/questions/61405216/how-to-set-up-virtualenv-on-windows-10-for-embedded-python
# example line to be appended to Activate.ps1: 
#       $Env:PYTHONPATH = "$VenvDir\Lib\site-packages$([System.IO.Path]::PathSeparator)$Env:VenvDir"

def multiply(a,b):
    print("Will compute", a, "times", b)
    c = 0
    for i in range(0, a):
        c = c + b
    return c