
#include "demo_tree.h"

#include "view/layout/grid_layout.h"

#include "demo_main.h"

namespace
{
    
}

DemoTree::DemoTree(DemoMain* main) : DemoBase(main) {}

DemoTree::~DemoTree() {}

std::wstring DemoTree::GetDemoTitle()
{
    return std::wstring(L"Tree");
}

void DemoTree::CreateDemoView(view::View* container)
{
    view::GridLayout* layout = new view::GridLayout(container);
    container->SetLayoutManager(layout);

    tree_ = new view::TreeView;
 //   root_->set_listener(this);
	tree_->SetRootShown(true);

    view::ColumnSet* column_set = layout->AddColumnSet(0);
    column_set->AddColumn(view::GridLayout::FILL, view::GridLayout::FILL, 1,
        view::GridLayout::USE_PREF, 0, 0);
    layout->StartRow(0, 0);
    layout->AddView(tree_);

 //   layout->StartRow(1, 0);
 //   layout->AddNode(tree_);
}

void DemoTree::OnTreeViewSelectionChanged( view::TreeView* tree_view )
{
	return;
}

bool DemoTree::CanEdit( view::TreeView* tree_view, ui::TreeModelNode* node )
{
	return true;
}

void DemoTree::OnTreeViewKeyDown( ui::KeyboardCode keycode )
{

}

const string16& DemoTree::GetTitle() const
{
	const char* sTitle = "tree";
	return *(const string16*)sTitle;
}