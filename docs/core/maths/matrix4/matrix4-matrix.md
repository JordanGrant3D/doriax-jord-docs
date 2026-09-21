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

## [Matrix4](matrix4.md).matrix

Raw column-major entries (`matrix[col][row]`). Prefer `set`/`get` or the row/column helpers, and reach for `matrix` directly only for bulk copies.

```cpp
float matrix[4][4];
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-matrix.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-matrix.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
