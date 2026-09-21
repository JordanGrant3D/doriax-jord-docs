---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Contact2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Contact2D](contact-2d.md).getShapeIndexB()

Fixture index of the contact on body B. Match it against the expected ground shape to confirm a clean landing.

```cpp
size_t getShapeIndexB() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/contact-2d/contact-2d-get-shape-index-b.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/contact-2d/contact-2d-get-shape-index-b.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
