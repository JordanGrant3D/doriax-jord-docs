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

## [Matrix3](matrix3.md).setRow(const unsigned int row, const Vector3& vec)

Overwrites a row from a `Vector3` (asserts `row < 3`). Replaces the forward row to aim the character without rebuilding the whole matrix.

```cpp
void setRow(const unsigned int row, const Vector3& vec);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-set-row.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-set-row.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
