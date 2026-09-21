---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Engine
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Engine](engine.md).removeSubscriptionsByTag(const std::string& substring)

Removes every engine event subscription whose tag contains the given substring.

```cpp
static void removeSubscriptionsByTag(const std::string& substring);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-remove-subscriptions-by-tag.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-remove-subscriptions-by-tag.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
