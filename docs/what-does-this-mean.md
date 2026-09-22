## In the docs you may have seen a few instances of

---
version: x.x.x
status: bot-tested # Options: untested, bot-tested, human-tested
---

The version is changed manually, if for example the version is 0.7.1, and the TARGET-VERSION.txt is 0.7.2 then it would be out of date,
to fix this issue you can test it in the TARGET_VERSION.txt version, manually or with a script, and then change status accordingly if it works.

Files that can be made incompatable by Doriax updates should have

```yaml
---
version: x.x.x
status: bot-tested # Options: untested, bot-tested, human-tested
---
```

At the top of their file, that is the only change needed.