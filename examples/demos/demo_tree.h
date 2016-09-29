
#ifndef __demo_tree_h__
#define __demo_tree_h__

#pragma once

#include "view/controls/tree/tree_view.h"
#include "ui_base/models/tree_node_iterator.h"
#include "ui_base/models/tree_node_model.h"

#include "demo_base.h"

class DemoTree : public DemoBase, //public ui::TreeModel,
	public view::TreeViewController
{
public:
    explicit DemoTree(DemoMain* main);
    virtual ~DemoTree();

    // Overridden from DemoBase:
    virtual std::wstring GetDemoTitle();
    virtual void CreateDemoView(view::View* container);

	// Overridden from TreeViewController
	virtual void OnTreeViewSelectionChanged(view::TreeView* tree_view);
	virtual bool CanEdit(view::TreeView* tree_view, ui::TreeModelNode* node);
	virtual void OnTreeViewKeyDown(ui::KeyboardCode keycode);

	// Overridden from TreeModelNode
	virtual const string16& GetTitle() const;

private:
//    view::TreeNode* root_;
// 	ui::TreeModelNode* node_;
    view::TreeView* tree_;

    DISALLOW_COPY_AND_ASSIGN(DemoTree);
};

#endif //__demo_list_h__