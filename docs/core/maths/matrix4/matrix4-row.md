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

## [Matrix4](matrix4.md).row(const unsigned int row)

Returns a row as `Vector4`. Reads the translation row out of a view matrix.

```cpp
Vector4 row(const unsigned int row) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-row.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-row.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
