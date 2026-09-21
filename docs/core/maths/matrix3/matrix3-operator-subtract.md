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

## [Matrix3](matrix3.md).operator-(const Matrix3& m)

Row-wise matrix subtraction. Measures how far a current orientation drifted from its tuned pose.

```cpp
Matrix3 operator-(const Matrix3& m) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-operator-subtract.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-operator-subtract.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
