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

## [Matrix4](matrix4.md).toString()

Returns `"Matrix4(m00, m01, ...)"` in row-major print order via `std::to_string`. Print it with `Log::print` when debugging world matrices.

```cpp
std::string toString() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-to-string.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-to-string.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
