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

## [Matrix4](matrix4.md).transpose()

Returns the transposed matrix. Swaps rows and columns, e.g. converting row-major authoring data into the column-major layout.

```cpp
Matrix4 transpose() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-transpose.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-transpose.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
