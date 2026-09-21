---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Matrix4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Matrix4](matrix4.md).linear()

Extracts the upper-left 3x3 rotation/scale block as a [Matrix3](../matrix3/matrix3.md). Recovers the facing basis out of a full world matrix.

```cpp
Matrix3 linear() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-linear.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-linear.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
