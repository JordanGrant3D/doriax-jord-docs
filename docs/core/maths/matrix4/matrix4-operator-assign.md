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

## [Matrix4](matrix4.md).operator=(const Matrix4& m)

Copies all sixteen entries via `memcpy` and returns `*this`. Snapshots a tuned spawn transform before experimenting on the copy.

```cpp
Matrix4& operator=(const Matrix4& m);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-operator-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-operator-assign.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
