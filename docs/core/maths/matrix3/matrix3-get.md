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

## [Matrix3](matrix3.md).get(const int col, const int row)

Reads a single entry (`matrix[col][row]`). Inspects how much of the world X axis leaks into the character's forward direction.

```cpp
float get(const int col, const int row) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-get.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-get.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
