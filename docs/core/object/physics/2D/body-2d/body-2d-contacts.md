---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Body2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Body2D](body-2d.md).getBodyContacts() / getShapeContacts()

Returns the currently active contact manifolds for the entire body or for a specific shape. Useful for manual overlap queries without subscribing to per-frame contact events.

```cpp
std::vector<Contact2D> getBodyContacts();
std::vector<Contact2D> getShapeContacts(size_t index);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-contacts.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-contacts.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
