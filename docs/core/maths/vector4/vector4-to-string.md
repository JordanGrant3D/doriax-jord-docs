---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Vector4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector4](vector4.md).toString()

Returns `"Vector4(x, y, z, w)"` via `std::to_string`. Print it with `Log::print` when debugging tints, weights and clip positions.

```cpp
std::string toString() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-to-string.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-to-string.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
