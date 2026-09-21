---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Matrix3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Matrix3](matrix3.md).calcInverse(Matrix3& rkInverse, float fTolerance)

Writes the inverse into the out-parameter and returns `true`; returns `false` (leaving partial cofactors) when `|det| <= fTolerance`. Prefer it over `inverse()` when you need to branch on singularity.

```cpp
bool calcInverse(Matrix3& rkInverse, float fTolerance) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-calc-inverse.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-calc-inverse.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
