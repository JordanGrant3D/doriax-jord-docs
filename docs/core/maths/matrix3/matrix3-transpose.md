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

## [Matrix3](matrix3.md).transpose()

Returns the transposed matrix. For pure rotations this equals the inverse, so it un-yaws directions without a full inversion.

```cpp
Matrix3 transpose() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-transpose.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-transpose.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
