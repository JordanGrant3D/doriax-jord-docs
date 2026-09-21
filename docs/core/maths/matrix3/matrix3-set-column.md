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

## [Matrix3](matrix3.md).setColumn(const unsigned int column, const Vector3& vec)

Overwrites a column from a `Vector3` (asserts `column < 3`). Swaps the up basis to lean the character model.

```cpp
void setColumn(const unsigned int column, const Vector3& vec);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-set-column.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-set-column.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
