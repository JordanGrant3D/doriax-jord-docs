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

## [Matrix4](matrix4.md).setColumn(const unsigned int column, const Vector4& vec)

Overwrites a column from a `Vector4` (asserts `column < 4`). Swaps the translation column to teleport a pose.

```cpp
void setColumn(const unsigned int column, const Vector4& vec);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-set-column.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-set-column.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
