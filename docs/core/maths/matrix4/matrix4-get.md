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

## [Matrix4](matrix4.md).get(const int col, const int row)

Reads a single entry (`matrix[col][row]`). Inspects the translation column to recover a spawn position.

```cpp
float get(const int col, const int row) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-get.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-get.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
