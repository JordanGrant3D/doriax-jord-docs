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

## [Matrix3](matrix3.md).set(const int col, const int row, const float val)

Writes a single entry (`matrix[col][row] = val`). Hand-builds basis columns, like the projection matrix inside `Plane::projectVector`.

```cpp
void set(const int col, const int row, const float val);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-set.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-set.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
