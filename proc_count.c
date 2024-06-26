#include <linux/module.h>
#include <linux/printk.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>
#include <linux/sched.h>

static struct proc_dir_entry *entry;

static int proc_count(struct seq_file *m, void *v){
    struct task_struct *task;
    int num = 0;
    
    for_each_process(task) {
        if (task->__state == TASK_RUNNING) {
            num=num+1;
        }
    }
    
    seq_printf(m, "%d\n", num);
    return 0;
}

static int __init proc_count_init(void)
{
    entry = proc_create_single("count", 0, NULL, proc_count);
    pr_info("proc_count: init\n");
    return 0;
}

static void __exit proc_count_exit(void)
{
    proc_remove(entry);
    pr_info("proc_count: exit\n");
}

module_init(proc_count_init);
module_exit(proc_count_exit);

MODULE_AUTHOR("Arnold He");
MODULE_DESCRIPTION("CS111 lab0 count proc number");
MODULE_LICENSE("GPL");

