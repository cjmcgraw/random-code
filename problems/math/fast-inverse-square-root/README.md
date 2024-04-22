# Fast Inverse Square Root
---

As one of the first implementations I am interested in briefly implementing the famous Q_rsqrt fuction from quake3 area made famous by John Carmack.

The problem is extremely constrained and thus has little to no modern practical application. But all problems in this repo are just for funzies anyways,
so lets take a random crack at it.


The general idea is to perform a bit of bit shifting, then run Newton's method.

You can read more about [it and it,s history](https://en.wikipedia.org/wiki/Fast_inverse_square_root)

## How to run:

```bash
docker build -t q_rsqrt . && docker run q_rsqrt 1234.5678
```

Will calculate the fast inverse square root of 1234.5678
