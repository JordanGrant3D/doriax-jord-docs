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

## [Matrix3](matrix3.md).row(const unsigned int row)

Returns a row as `Vector3(matrix[0][row], matrix[1][row], matrix[2][row])`. Reads the character's right/up/forward axes out of a pose.

```cpp
Vector3 row(const unsigned int row) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-row.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-row.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
