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

## [Matrix4](matrix4.md).column(const unsigned int column)

Returns a column as `Vector4`. Column 3 IS the translation; columns 0-2 are the scaled basis vectors.

```cpp
Vector4 column(const unsigned int column) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-column.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-column.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
