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

## [Matrix3](matrix3.md).column(const unsigned int column)

Returns a column as `Vector3(matrix[column][0..2])`. Columns ARE the basis vectors: right, up, forward.

```cpp
Vector3 column(const unsigned int column) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-column.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-column.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
