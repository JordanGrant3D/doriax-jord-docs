---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Quaternion
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Quaternion](quaternion.md).ptr()

Returns a pointer to `w` (four contiguous floats) for raw uploads. The non-`const` overload is writable, the `const` one read-only.

```cpp
float* ptr();
const float* ptr() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-ptr.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-ptr.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
