# Fast Inverse Square Root
---

As one of the first implementations I am interested in briefly implementing the famous Q_rsqrt fuction from quake3 area made famous by John Carmack.

The problem is extremely constrained and thus has little to no modern practical application. But all problems in this repo are just for funzies anyways,
so lets take a random crack at it.

Here are some funny constraints the problem carries:

1) Its to be done in fp-32 space. Meaning we can leverage the fact that we know its error bounds on the floating point number
2) Its purpose is simply to calculate a 3 dimensional vectors euclidean norm. It is designed simply to work in that space


The general idea is to perform a bit of bit shifting, then run Newton's method.

You can read more about [it and it,s history](https://en.wikipedia.org/wiki/Fast_inverse_square_root)

## How to run:

```bash
docker build -t q_rsqrt . && docker run q_rsqrt 1234.5678
```

Will calculate the fast inverse square root of 1234.5678
