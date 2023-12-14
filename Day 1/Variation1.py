import math # Python Version
def nCr(n, r):
    res = 1
    for i in range(r):
        res = res*(n-i)
        res = res // (i+1)
    return res
def pascalTriangle(r, c):
    element = nCr(r-1, c-1)
    return element
if __name__ == '__main__':
  r = 6
  c = 2
  element = pascalTriangle(r, c)
  print("The element at position (r, c) is: {element}")